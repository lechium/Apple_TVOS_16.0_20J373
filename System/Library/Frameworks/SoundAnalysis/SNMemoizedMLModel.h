//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModelDescription, NSString;
@protocol SNMLModel;

__attribute__((visibility("hidden")))
@interface SNMemoizedMLModel : NSObject
{
    unsigned long long _maxCacheSize;	// 8 = 0x8
    struct unordered_map<SoundAnalysis::MD5Hash, id<MLFeatureProvider>, std::hash<SoundAnalysis::MD5Hash>, std::equal_to<SoundAnalysis::MD5Hash>, std::allocator<std::pair<const SoundAnalysis::MD5Hash, id<MLFeatureProvider>>>> _cacheStorage;	// 16 = 0x10
    struct list<SoundAnalysis::MD5Hash, std::allocator<SoundAnalysis::MD5Hash>> _cacheAccessRecency;	// 56 = 0x38
    id <SNMLModel> _wrappedModel;	// 80 = 0x50
}

+ (id)new;	// IMP=0x0010000000038d28
- (id).cxx_construct;	// IMP=0x00000000000393e9
- (void).cxx_destruct;	// IMP=0x0000000000039376
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000038e8e
@property(readonly) MLModelDescription *modelDescription;
- (id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000038ccc
- (id)init;	// IMP=0x0000000000038c70

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

