from setuptools import find_packages, setup

package_name = 'ttbot_square'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='hans',
    maintainer_email='hans@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
        'square_controller_node = ttbot_square.square_controller:main',
        'square_abin=ttbot_square.sq_cont2:main',
        'circle_controller=ttbot_square.circ_cont:main'
        ],
    },
)
