##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=VTK_demo
ConfigurationName      :=Debug
WorkspacePath          :=/home/shuai/code/c++/codelite
ProjectPath            :=/home/shuai/code/c++/codelite/VTK_demo
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=shuai
Date                   :=23/06/19
CodeLitePath           :=/home/shuai/.codelite
LinkerName             :=/usr/bin/g++
SharedObjectLinkerName :=/usr/bin/g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="VTK_demo.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). $(IncludeSwitch)/usr/local/include/vtk-8.2 
IncludePCH             := 
RcIncludePath          := 
Libs                   := $(LibrarySwitch)vtkChartsCore-8.2 $(LibrarySwitch)vtkCommonColor-8.2 $(LibrarySwitch)vtkCommonComputationalGeometry-8.2 $(LibrarySwitch)vtkCommonCore-8.2 $(LibrarySwitch)vtkCommonDataModel-8.2 $(LibrarySwitch)vtkCommonExecutionModel-8.2 $(LibrarySwitch)vtkCommonMath-8.2 $(LibrarySwitch)vtkCommonMisc-8.2 $(LibrarySwitch)vtkCommonSystem-8.2 $(LibrarySwitch)vtkCommonTransforms-8.2 $(LibrarySwitch)vtkDICOMParser-8.2 $(LibrarySwitch)vtkDomainsChemistry-8.2 $(LibrarySwitch)vtkDomainsChemistryOpenGL2-8.2 $(LibrarySwitch)vtkexpat-8.2 $(LibrarySwitch)vtkFiltersAMR-8.2 $(LibrarySwitch)vtkFiltersCore-8.2 $(LibrarySwitch)vtkFiltersExtraction-8.2 $(LibrarySwitch)vtkFiltersFlowPaths-8.2 $(LibrarySwitch)vtkFiltersGeneral-8.2 $(LibrarySwitch)vtkFiltersGeneric-8.2 $(LibrarySwitch)vtkFiltersGeometry-8.2 $(LibrarySwitch)vtkFiltersHybrid-8.2 $(LibrarySwitch)vtkFiltersHyperTree-8.2 $(LibrarySwitch)vtkFiltersImaging-8.2 $(LibrarySwitch)vtkFiltersModeling-8.2 $(LibrarySwitch)vtkFiltersParallel-8.2 $(LibrarySwitch)vtkFiltersParallelImaging-8.2 $(LibrarySwitch)vtkFiltersPoints-8.2 $(LibrarySwitch)vtkFiltersProgrammable-8.2 $(LibrarySwitch)vtkFiltersSelection-8.2 $(LibrarySwitch)vtkFiltersSMP-8.2 $(LibrarySwitch)vtkFiltersSources-8.2 $(LibrarySwitch)vtkFiltersStatistics-8.2 $(LibrarySwitch)vtkFiltersTexture-8.2 $(LibrarySwitch)vtkFiltersTopology-8.2 $(LibrarySwitch)vtkFiltersVerdict-8.2 $(LibrarySwitch)vtkfreetype-8.2 $(LibrarySwitch)vtkGeovisCore-8.2 $(LibrarySwitch)vtkgl2ps-8.2 $(LibrarySwitch)vtkglew-8.2 $(LibrarySwitch)vtkhdf5-8.2 $(LibrarySwitch)vtkhdf5_hl-8.2 $(LibrarySwitch)vtkImagingColor-8.2 $(LibrarySwitch)vtkImagingCore-8.2 $(LibrarySwitch)vtkImagingFourier-8.2 $(LibrarySwitch)vtkImagingGeneral-8.2 $(LibrarySwitch)vtkImagingHybrid-8.2 $(LibrarySwitch)vtkImagingMath-8.2 $(LibrarySwitch)vtkImagingMorphological-8.2 $(LibrarySwitch)vtkImagingSources-8.2 $(LibrarySwitch)vtkImagingStatistics-8.2 $(LibrarySwitch)vtkImagingStencil-8.2 $(LibrarySwitch)vtkInfovisCore-8.2 $(LibrarySwitch)vtkInfovisLayout-8.2 $(LibrarySwitch)vtkInteractionImage-8.2 $(LibrarySwitch)vtkInteractionStyle-8.2 $(LibrarySwitch)vtkInteractionWidgets-8.2 $(LibrarySwitch)vtkIOAMR-8.2 $(LibrarySwitch)vtkIOCore-8.2 $(LibrarySwitch)vtkIOEnSight-8.2 $(LibrarySwitch)vtkIOExodus-8.2 $(LibrarySwitch)vtkIOExport-8.2 $(LibrarySwitch)vtkIOExportOpenGL2-8.2 $(LibrarySwitch)vtkIOGeometry-8.2 $(LibrarySwitch)vtkIOImage-8.2 $(LibrarySwitch)vtkIOImport-8.2 $(LibrarySwitch)vtkIOInfovis-8.2 $(LibrarySwitch)vtkIOLegacy-8.2 $(LibrarySwitch)vtkIOLSDyna-8.2 $(LibrarySwitch)vtkIOMINC-8.2 $(LibrarySwitch)vtkIOMovie-8.2 $(LibrarySwitch)vtkIONetCDF-8.2 $(LibrarySwitch)vtkIOParallel-8.2 $(LibrarySwitch)vtkIOParallelXML-8.2 $(LibrarySwitch)vtkIOPLY-8.2 $(LibrarySwitch)vtkIOSQL-8.2 $(LibrarySwitch)vtkIOTecplotTable-8.2 $(LibrarySwitch)vtkIOVideo-8.2 $(LibrarySwitch)vtkIOXML-8.2 $(LibrarySwitch)vtkIOXMLParser-8.2 $(LibrarySwitch)vtkjpeg-8.2 $(LibrarySwitch)vtkjsoncpp-8.2 $(LibrarySwitch)vtklibharu-8.2 $(LibrarySwitch)vtklibxml2-8.2 $(LibrarySwitch)vtklz4-8.2 $(LibrarySwitch)vtkmetaio-8.2 $(LibrarySwitch)vtkNetCDF-8.2 $(LibrarySwitch)vtkParallelCore-8.2 $(LibrarySwitch)vtkpng-8.2 $(LibrarySwitch)vtkRenderingAnnotation-8.2 $(LibrarySwitch)vtkRenderingContext2D-8.2 $(LibrarySwitch)vtkRenderingContextOpenGL2-8.2 $(LibrarySwitch)vtkRenderingCore-8.2 $(LibrarySwitch)vtkRenderingFreeType-8.2 $(LibrarySwitch)vtkRenderingGL2PSOpenGL2-8.2 $(LibrarySwitch)vtkRenderingImage-8.2 $(LibrarySwitch)vtkRenderingLabel-8.2 $(LibrarySwitch)vtkRenderingLOD-8.2 $(LibrarySwitch)vtkRenderingOpenGL2-8.2 $(LibrarySwitch)vtkRenderingVolume-8.2 $(LibrarySwitch)vtkRenderingVolumeOpenGL2-8.2 $(LibrarySwitch)vtksqlite-8.2 $(LibrarySwitch)vtksys-8.2 $(LibrarySwitch)vtktiff-8.2 $(LibrarySwitch)vtkverdict-8.2 $(LibrarySwitch)vtkViewsContext2D-8.2 $(LibrarySwitch)vtkViewsCore-8.2 $(LibrarySwitch)vtkViewsInfovis-8.2 $(LibrarySwitch)vtkzlib-8.2 
ArLibs                 :=  "vtkChartsCore-8.2" "vtkCommonColor-8.2" "vtkCommonComputationalGeometry-8.2" "vtkCommonCore-8.2" "vtkCommonDataModel-8.2" "vtkCommonExecutionModel-8.2" "vtkCommonMath-8.2" "vtkCommonMisc-8.2" "vtkCommonSystem-8.2" "vtkCommonTransforms-8.2" "vtkDICOMParser-8.2" "vtkDomainsChemistry-8.2" "vtkDomainsChemistryOpenGL2-8.2" "vtkexpat-8.2" "vtkFiltersAMR-8.2" "vtkFiltersCore-8.2" "vtkFiltersExtraction-8.2" "vtkFiltersFlowPaths-8.2" "vtkFiltersGeneral-8.2" "vtkFiltersGeneric-8.2" "vtkFiltersGeometry-8.2" "vtkFiltersHybrid-8.2" "vtkFiltersHyperTree-8.2" "vtkFiltersImaging-8.2" "vtkFiltersModeling-8.2" "vtkFiltersParallel-8.2" "vtkFiltersParallelImaging-8.2" "vtkFiltersPoints-8.2" "vtkFiltersProgrammable-8.2" "vtkFiltersSelection-8.2" "vtkFiltersSMP-8.2" "vtkFiltersSources-8.2" "vtkFiltersStatistics-8.2" "vtkFiltersTexture-8.2" "vtkFiltersTopology-8.2" "vtkFiltersVerdict-8.2" "vtkfreetype-8.2" "vtkGeovisCore-8.2" "vtkgl2ps-8.2" "vtkglew-8.2" "vtkhdf5-8.2" "vtkhdf5_hl-8.2" "vtkImagingColor-8.2" "vtkImagingCore-8.2" "vtkImagingFourier-8.2" "vtkImagingGeneral-8.2" "vtkImagingHybrid-8.2" "vtkImagingMath-8.2" "vtkImagingMorphological-8.2" "vtkImagingSources-8.2" "vtkImagingStatistics-8.2" "vtkImagingStencil-8.2" "vtkInfovisCore-8.2" "vtkInfovisLayout-8.2" "vtkInteractionImage-8.2" "vtkInteractionStyle-8.2" "vtkInteractionWidgets-8.2" "vtkIOAMR-8.2" "vtkIOCore-8.2" "vtkIOEnSight-8.2" "vtkIOExodus-8.2" "vtkIOExport-8.2" "vtkIOExportOpenGL2-8.2" "vtkIOGeometry-8.2" "vtkIOImage-8.2" "vtkIOImport-8.2" "vtkIOInfovis-8.2" "vtkIOLegacy-8.2" "vtkIOLSDyna-8.2" "vtkIOMINC-8.2" "vtkIOMovie-8.2" "vtkIONetCDF-8.2" "vtkIOParallel-8.2" "vtkIOParallelXML-8.2" "vtkIOPLY-8.2" "vtkIOSQL-8.2" "vtkIOTecplotTable-8.2" "vtkIOVideo-8.2" "vtkIOXML-8.2" "vtkIOXMLParser-8.2" "vtkjpeg-8.2" "vtkjsoncpp-8.2" "vtklibharu-8.2" "vtklibxml2-8.2" "vtklz4-8.2" "vtkmetaio-8.2" "vtkNetCDF-8.2" "vtkParallelCore-8.2" "vtkpng-8.2" "vtkRenderingAnnotation-8.2" "vtkRenderingContext2D-8.2" "vtkRenderingContextOpenGL2-8.2" "vtkRenderingCore-8.2" "vtkRenderingFreeType-8.2" "vtkRenderingGL2PSOpenGL2-8.2" "vtkRenderingImage-8.2" "vtkRenderingLabel-8.2" "vtkRenderingLOD-8.2" "vtkRenderingOpenGL2-8.2" "vtkRenderingVolume-8.2" "vtkRenderingVolumeOpenGL2-8.2" "vtksqlite-8.2" "vtksys-8.2" "vtktiff-8.2" "vtkverdict-8.2" "vtkViewsContext2D-8.2" "vtkViewsCore-8.2" "vtkViewsInfovis-8.2" "vtkzlib-8.2" 
LibPath                := $(LibraryPathSwitch). $(LibraryPathSwitch)/usr/local/lib 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++
CC       := /usr/bin/gcc
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/foot.cxx$(ObjectSuffix) $(IntermediateDirectory)/demo.cxx$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@test -d ./Debug || $(MakeDirCommand) ./Debug


$(IntermediateDirectory)/.d:
	@test -d ./Debug || $(MakeDirCommand) ./Debug

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/foot.cxx$(ObjectSuffix): foot.cxx $(IntermediateDirectory)/foot.cxx$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/shuai/code/c++/codelite/VTK_demo/foot.cxx" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/foot.cxx$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/foot.cxx$(DependSuffix): foot.cxx
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/foot.cxx$(ObjectSuffix) -MF$(IntermediateDirectory)/foot.cxx$(DependSuffix) -MM foot.cxx

$(IntermediateDirectory)/foot.cxx$(PreprocessSuffix): foot.cxx
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/foot.cxx$(PreprocessSuffix) foot.cxx

$(IntermediateDirectory)/demo.cxx$(ObjectSuffix): demo.cxx $(IntermediateDirectory)/demo.cxx$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/shuai/code/c++/codelite/VTK_demo/demo.cxx" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/demo.cxx$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/demo.cxx$(DependSuffix): demo.cxx
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/demo.cxx$(ObjectSuffix) -MF$(IntermediateDirectory)/demo.cxx$(DependSuffix) -MM demo.cxx

$(IntermediateDirectory)/demo.cxx$(PreprocessSuffix): demo.cxx
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/demo.cxx$(PreprocessSuffix) demo.cxx


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


