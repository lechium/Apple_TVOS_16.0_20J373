//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MontrealNNModelQuantization, NSArray, NSData, NSNumber, NSString;

@interface MontrealNNModelWeight
{
    NSString *_name;	// 8 = 0x8
    NSNumber *_index;	// 16 = 0x10
    NSArray *_dimension;	// 24 = 0x18
    NSArray *_weightValues;	// 32 = 0x20
    NSData *_weightData;	// 40 = 0x28
    MontrealNNModelQuantization *_quantization;	// 48 = 0x30
    NSString *_jsonDir;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000001fbba0
@property(readonly) NSString *jsonDir; // @synthesize jsonDir=_jsonDir;
@property(readonly) MontrealNNModelQuantization *quantization; // @synthesize quantization=_quantization;
@property(readonly) NSData *weightData; // @synthesize weightData=_weightData;
@property(readonly) NSArray *weightValues; // @synthesize weightValues=_weightValues;
@property(readonly) NSArray *dimension; // @synthesize dimension=_dimension;
@property(readonly) NSNumber *index; // @synthesize index=_index;
@property(readonly) NSString *name; // @synthesize name=_name;
- (id)createConvertArrayToData:(id)arg1 quantization:(id)arg2;	// IMP=0x00000000001fb2c0
- (id)createflattenWeightsHierarchy:(id)arg1;	// IMP=0x00000000001fafe0
- (id)createflattenWeightsFile:(id)arg1;	// IMP=0x00000000001faf20
- (id)createDataContainer;	// IMP=0x00000000001fac00
- (void)generateJSONAtPath:(id)arg1;	// IMP=0x00000000001fa800
- (id)jsonDescription;	// IMP=0x00000000001fa6c0
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x00000000001fa540
- (id)initWithDictionary:(id)arg1 quantization:(id)arg2 jsonDir:(id)arg3;	// IMP=0x00000000001fa390
- (id)initWithName:(id)arg1 index:(id)arg2 dimension:(id)arg3 weightValues:(id)arg4;	// IMP=0x00000000001fa280
- (id)initWithName:(id)arg1 index:(id)arg2 dimension:(id)arg3 weightData:(id)arg4;	// IMP=0x00000000001fa170
- (id)initWithName:(id)arg1 index:(id)arg2 dimension:(id)arg3;	// IMP=0x00000000001fa080
- (id)checkForValidity;	// IMP=0x00000000001f9ee0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
