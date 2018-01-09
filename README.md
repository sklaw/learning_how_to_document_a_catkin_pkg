# Steps To Document A Catkin Package (For C++&Python)

The following steps are what I've taken to document a catkin package containing both CPP and Python codes. I use Doxygen for CPP codes and Sphinx for Python codes.

1. Follow Section 2 on [this page](http://wiki.ros.org/Sphinx) to setup and "rosify" Sphinx.

1. Copy rosdoc.yaml in this repo to your package root. It will setup Doxygen for CPP code and Sphinx for Python code.

1. I recommend you to use google-style docstring when documenting Python. If so, your Sphinx version should be > 1.3 and you should enable Napoleon in Sphinx's `conf.py`. To do that, open doc->conf.py, add `'sphinx.ext.napoleon'` to `extension` list.

1. In your package root, run `sphinx-apidoc -f -o doc src`

1. Then run `rosdoc_lite .`

1. Open doc->html->index.html to see the generated doc. If anything is wrong in the doc, you can try to debug by reading every warning/error in previous two steps.
