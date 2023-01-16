//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MIOModelDescription, MIOVersionInfo, NSArray, NSDictionary, NSString, NSURL;
@protocol MIOModeling;

__attribute__((visibility("hidden")))
@interface MIOSpecificationFileModel : NSObject
{
    NSURL *_modelURL;	// 8 = 0x8
    NSObject<MIOModeling> *_specificationModel;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002c321
@property(copy, nonatomic) NSObject<MIOModeling> *specificationModel; // @synthesize specificationModel=_specificationModel;
@property(copy, nonatomic) NSURL *modelURL; // @synthesize modelURL=_modelURL;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002c1f8
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002c0b4
@property(readonly, nonatomic) void *irProgram;
@property(readonly, copy, nonatomic) NSDictionary *layerHistogram;
@property(readonly, copy, nonatomic) NSArray *subModels;
@property(readonly, copy, nonatomic) NSArray *layers;
@property(copy, nonatomic) MIOModelDescription *modelDescription;
@property(readonly, copy, nonatomic) NSString *modelTypeName;
@property(readonly, copy, nonatomic) MIOVersionInfo *specificationVersion;
- (_Bool)writeToURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002bcea
- (id)initWithModel:(id)arg1;	// IMP=0x000000000002bc6b
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002bab8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

