/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNMetalLibraryManager : NSObject <NSFilePresenter> {
    struct __CFDictionary { } * _availableCompiledLibraries;
    struct __CFString { } * _availableCompiledLibrariesSearchKey;
    NSMapTable * _availableLibraries;
    <MTLLibrary> * _commonProfileCacheLibrary;
    NSDictionary * _commonProfilePrecompiledFunctions;
    <MTLLibrary> * _defaultLibrary;
    struct __C3DFXMetalProgram { struct __C3DFXProgram { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_3_1; unsigned long long x_1_3_2; } x_1_2_1; void *x_1_2_2; struct __CFString {} *x_1_2_3; struct __CFString {} *x_1_2_4; struct __CFDictionary {} *x_1_2_5; struct __C3DScene {} *x_1_2_6; long long x_1_2_7; } x_1_1_1; int x_1_1_2; unsigned int x_1_1_3 : 1; unsigned int x_1_1_4 : 1; struct __C3DFXProgramDelegate {} *x_1_1_5; } x1; struct __CFString {} *x2[2]; struct __CFString {} *x3; struct __CFDictionary {} *x4; void *x5; struct __CFDictionary {} *x6; void *x7; struct __CFString {} *x8; } * _defaultProgram;
    struct __C3DFXMetalProgram { struct __C3DFXProgram { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_3_1; unsigned long long x_1_3_2; } x_1_2_1; void *x_1_2_2; struct __CFString {} *x_1_2_3; struct __CFString {} *x_1_2_4; struct __CFDictionary {} *x_1_2_5; struct __C3DScene {} *x_1_2_6; long long x_1_2_7; } x_1_1_1; int x_1_1_2; unsigned int x_1_1_3 : 1; unsigned int x_1_1_4 : 1; struct __C3DFXProgramDelegate {} *x_1_1_5; } x1; struct __CFString {} *x2[2]; struct __CFString {} *x3; struct __CFDictionary {} *x4; void *x5; struct __CFDictionary {} *x6; void *x7; struct __CFString {} *x8; } * _defaultProgramForTessellation;
    <MTLDevice> * _device;
    NSObject<OS_dispatch_queue> * _deviceQueue;
    <MTLLibrary> * _frameworkLibrary;
    struct __C3DFXMetalProgram { struct __C3DFXProgram { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_3_1; unsigned long long x_1_3_2; } x_1_2_1; void *x_1_2_2; struct __CFString {} *x_1_2_3; struct __CFString {} *x_1_2_4; struct __CFDictionary {} *x_1_2_5; struct __C3DScene {} *x_1_2_6; long long x_1_2_7; } x_1_1_1; int x_1_1_2; unsigned int x_1_1_3 : 1; unsigned int x_1_1_4 : 1; struct __C3DFXProgramDelegate {} *x_1_1_5; } x1; struct __CFString {} *x2[2]; struct __CFString {} *x3; struct __CFDictionary {} *x4; void *x5; struct __CFDictionary {} *x6; void *x7; struct __CFString {} *x8; } * _isolateProgram;
    NSURL * _resourcesFolderURL;
    bool  _traceResources;
    NSOperationQueue * _watchingFolderQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) Class superclass;

- (void)clearCompiledLibraries;
- (id)computePipelineForSourceCode:(id)arg1 functionName:(id)arg2 compileOptions:(id)arg3;
- (void)dealloc;
- (struct __C3DFXProgram { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; int x2; unsigned int x3 : 1; unsigned int x4 : 1; struct __C3DFXProgramDelegate {} *x5; }*)defaultProgramUsingTessellation:(bool)arg1;
- (id)deviceQueue;
- (id)frameworkLibrary;
- (id)hashCodeForSource:(id)arg1 macros:(id)arg2;
- (id)initWithDevice:(id)arg1;
- (struct __C3DFXProgram { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; int x2; unsigned int x3 : 1; unsigned int x4 : 1; struct __C3DFXProgramDelegate {} *x5; }*)isolateProgram;
- (id)libraryForCommonProfileCache;
- (id)libraryForFile:(id)arg1;
- (void)libraryForSourceCode:(id)arg1 preprocessorsMacros:(id)arg2 programDelegate:(struct __C3DFXProgramDelegate { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct { int (*x_2_1_1)(); int (*x_2_1_2)(); int (*x_2_1_3)(); int (*x_2_1_4)(); } x2; void *x3; }*)arg3 programDesc:(struct { struct __C3DFXProgram {} *x1; struct __C3DMaterial {} *x2; struct __C3DGeometry {} *x3; struct __C3DFXPass {} *x4; struct __C3DFXPass {} *x5; id x6; struct __C3DBlendStates {} x7; struct __C3DNode {} *x8; unsigned char x9; bool x10; id x11; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x12; void*x13; unsigned char x14; id /* block */ x15; })arg4 async:(bool)arg5 group:(id)arg6 completionHandler:(id /* block */)arg7;
- (id)newCommonProfileFunctionWithName:(id)arg1;
- (void)presentedItemDidChange;
- (id)presentedItemOperationQueue;
- (id)presentedItemURL;
- (void)reloadFrameworkLibrary;

@end
