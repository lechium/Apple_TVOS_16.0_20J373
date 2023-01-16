//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface CPLByClassExtractionStep
{
    CDUnknownFunctionPointerType _query;	// 24 = 0x18
    Class _extractionClass;	// 32 = 0x20
    unsigned long long _maximumCount;	// 40 = 0x28
    NSString *_queryDescription;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000f2f65
@property(readonly, copy, nonatomic) NSString *queryDescription; // @synthesize queryDescription=_queryDescription;
@property(readonly, nonatomic) unsigned long long maximumCount; // @synthesize maximumCount=_maximumCount;
@property(readonly, nonatomic) Class extractionClass; // @synthesize extractionClass=_extractionClass;
- (id)shortDescription;	// IMP=0x00000000000f2f1d
- (_Bool)shouldResetFromThisStepWithIncomingChange:(id)arg1;	// IMP=0x00000000000f2eee
- (void)reset;	// IMP=0x00000000000f2ee8
- (_Bool)extractToBatch:(id)arg1 maximumCount:(unsigned long long)arg2 maximumResourceSize:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x00000000000f2adb
- (id)initWithStorage:(id)arg1 scopeIdentifier:(id)arg2 description:(id)arg3 class:(Class)arg4 maximumCount:(unsigned long long)arg5 query:(CDUnknownFunctionPointerType)arg6;	// IMP=0x00000000000f2a1d

@end

