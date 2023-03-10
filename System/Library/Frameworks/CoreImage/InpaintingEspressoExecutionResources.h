//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface InpaintingEspressoExecutionResources : NSObject
{
    CDStruct_2bc666a5 _network;	// 8 = 0x8
    void *_plan;	// 24 = 0x18
    void *_context;	// 32 = 0x20
    NSString *_modelResourceDescriptor;	// 40 = 0x28
    NSString *_modelResourceFileName;	// 48 = 0x30
    NSString *_configurationName;	// 56 = 0x38
    NSArray *_inputBlobNames;	// 64 = 0x40
    NSArray *_outputBlobNames;	// 72 = 0x48
    int _filterUsageCount;	// 80 = 0x50
    int _modelInputPixelFormat;	// 84 = 0x54
    int _modelOutputPixelFormat;	// 88 = 0x58
    _Bool _membraneModel;	// 92 = 0x5c
}

+ (void)tearDownEspressoContext:(void **)arg1 andPlan:(void **)arg2;	// IMP=0x00600000001777a5
@property(readonly) _Bool membraneModel; // @synthesize membraneModel=_membraneModel;
@property(readonly) int modelOutputPixelFormat; // @synthesize modelOutputPixelFormat=_modelOutputPixelFormat;
@property(readonly) int modelInputPixelFormat; // @synthesize modelInputPixelFormat=_modelInputPixelFormat;
@property(readonly) int filterUsageCount; // @synthesize filterUsageCount=_filterUsageCount;
@property(readonly) NSArray *outputBlobNames; // @synthesize outputBlobNames=_outputBlobNames;
@property(readonly) NSArray *inputBlobNames; // @synthesize inputBlobNames=_inputBlobNames;
@property(retain) NSString *modelConfigurationName; // @synthesize modelConfigurationName=_configurationName;
@property(readonly) void *context; // @synthesize context=_context;
@property(readonly) void *plan; // @synthesize plan=_plan;
@property(readonly) CDStruct_2bc666a5 network; // @synthesize network=_network;
@property(readonly) NSString *modelResourceFileName; // @synthesize modelResourceFileName=_modelResourceFileName;
@property(readonly) NSString *modelResourceDescriptor; // @synthesize modelResourceDescriptor=_modelResourceDescriptor;
- (id)description;	// IMP=0x0000000000177911
- (void)freeEspressoResources;	// IMP=0x000000000017775f
- (void)updateWithModelResourceDescriptor:(id)arg1 modelResourceFileName:(id)arg2 network:(CDStruct_2bc666a5)arg3 plan:(void *)arg4 context:(void *)arg5 inputBlobNames:(id)arg6 outputBlobNames:(id)arg7 membraneModel:(_Bool)arg8 modelInputPixelFormat:(int)arg9 modelOutputPixelFormat:(int)arg10;	// IMP=0x00000000001776e6
- (void)dealloc;	// IMP=0x00000000001776a8
- (void)deregisterFilterUsage;	// IMP=0x0000000000177689
- (void)registerFilterUsage;	// IMP=0x000000000017766a
- (void)releaseModelIfNoLongerNeeded;	// IMP=0x0000000000177626
- (_Bool)isModelInitialized;	// IMP=0x0000000000177618
- (_Bool)initializeModelForResourceDescriptor:(id)arg1 resourceFileName:(id)arg2 inputBlobNames:(id)arg3 outputBlobNames:(id)arg4 cpuOnlyModel:(_Bool)arg5 membraneModel:(_Bool)arg6 modelInputPixelFormat:(int)arg7 modelOutputPixelFormat:(int)arg8 error:(id *)arg9;	// IMP=0x0000000000177505
- (_Bool)initializeInpaintingModelForResourceDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001773e6
- (_Bool)descriptorIsAMembraneModel:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001773a7
- (_Bool)parseModelResourceDescriptor:(id)arg1 extractMembraneInfo:(_Bool *)arg2 inputPixelFormat:(int *)arg3 outputPixelFormat:(int *)arg4 andResourceFileName:(id *)arg5 error:(id *)arg6;	// IMP=0x000000000017722b
- (id)CIImageProcessorDigestObject;	// IMP=0x0000000000177212
- (id)init;	// IMP=0x00000000001771d0

@end

