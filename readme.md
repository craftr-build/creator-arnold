Arnold Shader Unit Scripts
==========================

As easy as 1, 2, 3.

__Template__

```python
load('platform', 'p')

workspace.path.append(eval('$ProjectPath/vendor'))
define('arnold.shader:SDKPath', '$ProjectPath/vendor/Arnold-SDK-4.1.3.3-$Platform')
load('arnold.shader', 'ai')

define('SourceDir',     '$ProjectPath/source')
define('BuildDir',      '$ProjectPath/build/${ai:Arch}')
define('ShaderSources', '$*($SourceDir/shaders/*.cpp)')
define('ShaderOutputs', '$(p:dll $(move $ShaderSources, $SourceDir, $BuildDir))')

@target
def shaders():
  for fin, fout in foreach_split('$ShaderSources', '$ShaderOutputs'):
    shaders.add('$fin', '$fout', '$(ai:CompileShader $@, $<)')
```

__Todo__

- [ ] Support for Mac OS and Linux Systems
