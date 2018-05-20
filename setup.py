from setuptools import setup, Extension


mod = Extension("_mycmath",
                sources=["mycmathmodule.c"])
setup(
    setup_requires=["setuptools_scm"],
    use_scm_version=True,
    ext_modules=[mod],
)
