from setuptools import setup, Extension


mod = Extension("_mycmath",
                sources=["mycmathmodule.c"])
setup(
    ext_modules=[mod],
)
