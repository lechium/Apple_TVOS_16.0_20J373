//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSNumber, NSURL;

@interface CVNLPCommSafetyImageAnalyzer
{
    unsigned long long data_dim[4];	// 8 = 0x8
    void *encoderPlan;	// 40 = 0x28
    void *encoderCtx;	// 48 = 0x30
    CDStruct_2bc666a5 encoderNet;	// 56 = 0x38
    CDStruct_0a65202a leafProbabilities;	// 72 = 0x48
    _Bool _otgxRetrieveAllClasses;	// 240 = 0xf0
    int __espressoEngine;	// 244 = 0xf4
    int __espressoDeviceId;	// 248 = 0xf8
    int __espressoStorageType;	// 252 = 0xfc
    NSDictionary *_acceptedOutputIndices;	// 256 = 0x100
    NSNumber *_otgxMainThreshold;	// 264 = 0x108
    unsigned long long _otgxMainIndex;	// 272 = 0x110
    NSURL *_modelUrl;	// 280 = 0x118
}

+ (id)getOperatingPointDataForClassName:(id)arg1 modelURL:(id)arg2 error:(id *)arg3;	// IMP=0x0060000000024d30
+ (id)_decodeName:(id)arg1;	// IMP=0x0060000000022a30
+ (id)_encodeName:(id)arg1;	// IMP=0x0060000000022800
+ (id)_createNameDecodingDict;	// IMP=0x00600000000225c0
+ (id)_createNameEncodingDict;	// IMP=0x0060000000021c40
+ (id)_nameFromRevParts:(id)arg1;	// IMP=0x0060000000021b20
+ (id)_readOperatingThresholdsDataUsingModelURL:(id)arg1 error:(id *)arg2;	// IMP=0x0060000000021860
+ (_Bool)_checkIfOnANEDevice;	// IMP=0x0060000000021850
- (void).cxx_destruct;	// IMP=0x00000000000250a0
@property(readonly) int _espressoStorageType; // @synthesize _espressoStorageType=__espressoStorageType;
@property(readonly) int _espressoDeviceId; // @synthesize _espressoDeviceId=__espressoDeviceId;
@property(readonly) int _espressoEngine; // @synthesize _espressoEngine=__espressoEngine;
@property(readonly) NSURL *modelUrl; // @synthesize modelUrl=_modelUrl;
@property(readonly) _Bool otgxRetrieveAllClasses; // @synthesize otgxRetrieveAllClasses=_otgxRetrieveAllClasses;
@property(readonly) unsigned long long otgxMainIndex; // @synthesize otgxMainIndex=_otgxMainIndex;
@property(readonly) NSNumber *otgxMainThreshold; // @synthesize otgxMainThreshold=_otgxMainThreshold;
@property(readonly) NSDictionary *acceptedOutputIndices; // @synthesize acceptedOutputIndices=_acceptedOutputIndices;
- (id)_processNetworkOutput:(id)arg1;	// IMP=0x0000000000024880
- (id)_computeOutputForPixelBuffer:(struct __CVBuffer *)arg1 error:(id *)arg2;	// IMP=0x00000000000245e0
- (id)generateClassificationScoresForPixelBuffer:(struct __CVBuffer *)arg1 error:(id *)arg2;	// IMP=0x00000000000241b0
- (id)classifyPixelBuffer:(struct __CVBuffer *)arg1 error:(id *)arg2;	// IMP=0x0000000000023f70
- (id)computeOutputForImage:(struct vImage_Buffer *)arg1 error:(id *)arg2;	// IMP=0x0000000000023cc0
- (id)generateClassificationScoresForImage:(struct CGImage *)arg1 error:(id *)arg2;	// IMP=0x00000000000235b0
- (id)classifyImage:(struct CGImage *)arg1 error:(id *)arg2;	// IMP=0x0000000000023370
- (void)_extractThresholdForOTGXMain:(id)arg1;	// IMP=0x0000000000022c60
- (_Bool)loadNetworkForURL:(id)arg1 espressoEngine:(int)arg2 storageType:(int)arg3 deviceId:(int)arg4;	// IMP=0x0000000000020fc0
- (void)dealloc;	// IMP=0x0000000000020f30
- (id)initWithModelURL:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000020360

@end

