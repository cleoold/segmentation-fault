#lang racket/base

(require racket/runtime-path)
(require ffi/unsafe
         ffi/unsafe/define)

(provide crash_me)

(define-runtime-path curr-dir "./") ; relative to this file, not executable run
(define-ffi-definer define-crashme
    (ffi-lib "libcrashme"
             #:get-lib-dirs (lambda () (list curr-dir))))

(define-crashme crash_me (_fun -> _void))
