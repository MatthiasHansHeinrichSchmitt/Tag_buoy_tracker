from setuptools import find_packages
from setuptools import setup

setup(
    name='p_action_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('p_action_interfaces', 'p_action_interfaces.*')),
)
