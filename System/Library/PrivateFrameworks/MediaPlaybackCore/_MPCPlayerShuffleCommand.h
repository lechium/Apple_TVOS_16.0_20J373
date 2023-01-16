//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _MPCPlayerShuffleCommand
{
    _Bool _supportsChangeShuffle;	// 8 = 0x8
    _Bool _supportsAdvanceShuffle;	// 9 = 0x9
    long long _currentShuffleType;	// 16 = 0x10
    NSArray *_supportedShuffleTypes;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000010e70c
@property(nonatomic) _Bool supportsAdvanceShuffle; // @synthesize supportsAdvanceShuffle=_supportsAdvanceShuffle;
@property(nonatomic) _Bool supportsChangeShuffle; // @synthesize supportsChangeShuffle=_supportsChangeShuffle;
@property(retain, nonatomic) NSArray *supportedShuffleTypes; // @synthesize supportedShuffleTypes=_supportedShuffleTypes;
@property(nonatomic) long long currentShuffleType; // @synthesize currentShuffleType=_currentShuffleType;
- (id)advance;	// IMP=0x000000000010e3a9
- (id)setShuffleType:(long long)arg1;	// IMP=0x000000000010e1ae

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

