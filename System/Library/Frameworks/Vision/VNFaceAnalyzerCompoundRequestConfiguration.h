//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VNFaceAnalyzerCompoundRequestConfiguration
{
    NSMutableDictionary *_detectorConfigurationOptions;	// 8 = 0x8
    NSMutableArray *_originalRequests;	// 16 = 0x10
    NSString *_detectorType;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000075278
@property(copy, nonatomic) NSString *detectorType; // @synthesize detectorType=_detectorType;
@property(readonly, nonatomic) NSMutableArray *originalRequests; // @synthesize originalRequests=_originalRequests;
- (id)detectorConfigurationOptions;	// IMP=0x0000000000075230
- (void)setDetectorConfigurationOptions:(id)arg1;	// IMP=0x0000000000075152
- (void)setResolvedRevision:(unsigned long long)arg1;	// IMP=0x000000000007508d
- (void)setDetectorConfigurationOption:(id)arg1 value:(id)arg2;	// IMP=0x0000000000074fa3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000074ed6
- (id)initWithRequestClass:(Class)arg1;	// IMP=0x0000000000074d7b

@end

