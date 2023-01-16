//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface MLCompilerEvent : NSObject
{
    NSString *_modelName;	// 8 = 0x8
    NSString *_modelHash;	// 16 = 0x10
    NSNumber *_modelType;	// 24 = 0x18
    NSNumber *_modelOrigin;	// 32 = 0x20
    NSString *_modelVersion;	// 40 = 0x28
    NSString *_modelCompiledWithVersion;	// 48 = 0x30
    NSString *_compilerVersion;	// 56 = 0x38
    NSNumber *_milUpgradeStatus;	// 64 = 0x40
    NSString *_milUpgradeFailureReason;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000001dbcb
@property(copy, nonatomic) NSString *milUpgradeFailureReason; // @synthesize milUpgradeFailureReason=_milUpgradeFailureReason;
@property(copy, nonatomic) NSNumber *milUpgradeStatus; // @synthesize milUpgradeStatus=_milUpgradeStatus;
@property(copy, nonatomic) NSString *compilerVersion; // @synthesize compilerVersion=_compilerVersion;
@property(copy, nonatomic) NSString *modelCompiledWithVersion; // @synthesize modelCompiledWithVersion=_modelCompiledWithVersion;
@property(copy, nonatomic) NSString *modelVersion; // @synthesize modelVersion=_modelVersion;
@property(copy, nonatomic) NSNumber *modelOrigin; // @synthesize modelOrigin=_modelOrigin;
@property(copy, nonatomic) NSNumber *modelType; // @synthesize modelType=_modelType;
@property(copy, nonatomic) NSString *modelHash; // @synthesize modelHash=_modelHash;
@property(copy, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
@property(readonly) NSDictionary *dictionaryRepresentation;
@property(readonly) NSString *name;
- (id)init;	// IMP=0x000000000001d7fe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

