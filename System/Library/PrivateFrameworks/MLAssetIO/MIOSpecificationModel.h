//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MIOModelDescription, MIOParserContext, MIOVersionInfo, NSArray, NSData, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface MIOSpecificationModel : NSObject
{
    struct unique_ptr<MIL::IRProgram, std::default_delete<MIL::IRProgram>> _irProgram;	// 8 = 0x8
    MIOVersionInfo *_specificationVersion;	// 16 = 0x10
    NSString *_modelTypeName;	// 24 = 0x18
    MIOModelDescription *_modelDescription;	// 32 = 0x20
    NSArray *_layers;	// 40 = 0x28
    NSArray *_subModels;	// 48 = 0x30
    NSDictionary *_layerHistogram;	// 56 = 0x38
    NSData *_specificationData;	// 64 = 0x40
    MIOParserContext *_parserContext;	// 72 = 0x48
}

- (id).cxx_construct;	// IMP=0x000000000002b9cd
- (void).cxx_destruct;	// IMP=0x000000000002b948
@property(readonly, copy, nonatomic) MIOParserContext *parserContext; // @synthesize parserContext=_parserContext;
@property(readonly, copy, nonatomic) NSData *specificationData; // @synthesize specificationData=_specificationData;
@property(readonly, copy, nonatomic) NSDictionary *layerHistogram; // @synthesize layerHistogram=_layerHistogram;
@property(readonly, copy, nonatomic) NSArray *subModels; // @synthesize subModels=_subModels;
@property(readonly, copy, nonatomic) NSArray *layers; // @synthesize layers=_layers;
@property(copy, nonatomic) MIOModelDescription *modelDescription; // @synthesize modelDescription=_modelDescription;
@property(readonly, copy, nonatomic) NSString *modelTypeName; // @synthesize modelTypeName=_modelTypeName;
@property(readonly, copy, nonatomic) MIOVersionInfo *specificationVersion; // @synthesize specificationVersion=_specificationVersion;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002b71f
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002b277
@property(readonly, nonatomic) void *irProgram;
- (_Bool)writeToURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002ac2b
- (id)initWithMessageStream:(struct CodedInputStream *)arg1 parserContext:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002a794
- (id)initWithSpecificationData:(id)arg1 parserContext:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002a650

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

