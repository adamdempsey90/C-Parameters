# C-Parameters
Generate C code to read a "key =  val" parameter file and store it in a C struct.
An example parameter file is in the examples directory,
```
# Grid Parameters
nx = 100
ny = 200
xmin = .1
xmax = 10.0

# Integrator Parameters
CTU = Yes
PLM = No

# Output file
outputname = example.bin
```
To run it execute,
```
cd examples/
python ../c-parameters.py
sh build.sh
```
and you should see the output,
```
Testing
	nx = 100
	ny = 200
	xmin = 0.1
	xmax = 10
	ctu = Yes
	plm = No
	outputname = example.bin
Redefined on the command line:
nx = 100
ny = 200
xmin = 0.1
xmax = 10
CTU = Yes
PLM = No
```

This will generate the files par.h and read_pars.c which you can then include in your project. 
