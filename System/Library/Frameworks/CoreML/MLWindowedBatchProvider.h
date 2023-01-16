//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol MLBatchProvider;

__attribute__((visibility("hidden")))
@interface MLWindowedBatchProvider : NSObject
{
    id <MLBatchProvider> _fullBatch;	// 8 = 0x8
    long long _startIndex;	// 16 = 0x10
    long long _windowLength;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000015e77d
@property(nonatomic) long long windowLength; // @synthesize windowLength=_windowLength;
@property(nonatomic) long long startIndex; // @synthesize startIndex=_startIndex;
@property(retain, nonatomic) id <MLBatchProvider> fullBatch; // @synthesize fullBatch=_fullBatch;
- (id)featuresAtIndex:(long long)arg1;	// IMP=0x000000000015e71d
@property(readonly, nonatomic) long long count;
- (id)initWithBatch:(id)arg1 startIndex:(long long)arg2 windowLength:(long long)arg3 error:(id *)arg4;	// IMP=0x000000000015e562

@end

