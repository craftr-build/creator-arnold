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

target(
  name='shaders',
  inputs='$ShaderSources',
  outputs='$ShaderOutputs',
  command='$(ai:CompileShader $@, $<)',
  for_each=True,
)
```

__Todo__

- [ ] Support for Mac OS and Linux Systems
