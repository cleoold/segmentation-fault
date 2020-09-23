from setuptools import setup
from setuptools.extension import Extension

def main():
    ext_module = Extension(
        'crashme',
        ['crashme.c'],
        # include_dirs=[...], -- hardcoded in source file
        depends=['../../common/crash_impl.h']
    )

    setup(
        name='crashme',
        version='0.0',
        description='',
        author='',
        author_email='',
        ext_modules=[ext_module]
    )

if __name__ == '__main__':
    main()
