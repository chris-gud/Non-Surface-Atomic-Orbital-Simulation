HYDROGEN ATOM ORBITAL SIMULATOR
BY CHRIS GUDMUNDSEN
DEC. 2024

  This program is meant to calculate and display the probability density functions of an electron in 
the hydrogen atom. Once the user enters their desired quantum numbers, a window is created with 3 axes
and several spheres arranged in a cube. The origin of the axis represents the nucleus of the
hydrogen atom. The electron probability density at several points in 3D space is represented by the
radius of the sphere at that location. The maximum radius for each orbital is arbitrary - it has
been manually fitted to be visually appealing and clear (this means that it is not recommended to
draw conclusions from radius size when comparing orbitals stemming from different combinations of
quantum numbers). In addition, the scale of the axes change from orbital to orbital. They have been
manually set to display the most interesting parts of each orbital clearly. The viewer can assume
that the probability density decreases to 0 outside of the axis volume. The scale of the axes for
each orbital is printed to terminal for the viewer's reference.
 
  How is this simulation different from the rest? Most depictions of the orbitals of the hydrogen 
atom depict a surface. The creator chooses some cutoff probability (90% usually) for which to depict
a surface that the electron has that cutoff probability of being within at any time. However, this
misplaces a lot of information; the viewer cannot visualize the probability densities within the surface.
A naive viewer may be led to believe that the probability density is thus uniform within the surface.
This is not the case. This program is meant to prove it.


CONTROLS: 

  W : move forwards into the plane of the screen
  S : move backwards away from the plane of the screen
  A : move left upon the plane of the screen
  D : move right upon the plane of the screen


----------------------------------- ACKNOWLEDGEMENTS -----------------------------------------------
 
OpenGL single sphere indices and vertices generation from "OpenGL Sphere Tutorial" by Song Ho Ahn
https://www.songho.ca/opengl/gl_sphere.html

Texture, Camera, EBO, VAO, VBO, and shaderClass .cpp and .h (basic OpenGL 3D display and movement)
from Youtube "OpenGL Course - Create 3D and 2D Graphics With C++" by freeCodeCamp.org
(Github VictorGordan/opengl-tutorials)
https://www.youtube.com/watch?v=45MIykWJ-C4
https://github.com/VictorGordan/opengl-tutorials

-----------------------------------------------------------------------------------------------------
