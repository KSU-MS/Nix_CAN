{ pkgs }:

pkgs.stdenv.mkDerivation rec {
  name = "can_pkg";
  
  src = ./DBC_out;
  
  # buildInputs = [ python311Packages.cantools ]; # Python as a build dependency
  
  # Define the build phase to execute the scripts
  buildPhase = ''
  '';

  # Specify the output of the build process
  # In this case, it will be the generated file
  installPhase = ''
    mkdir -p $out
    mv car.dbc $out/car.dbc
  '';
}
