//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol SHDataFetcher;

__attribute__((visibility("hidden")))
@interface SHTimeAndPlaceController : NSObject
{
    id <SHDataFetcher> _dataFetcher;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000007bcb
@property(readonly, nonatomic) id <SHDataFetcher> dataFetcher; // @synthesize dataFetcher=_dataFetcher;
- (void)affinityGroupsFromData:(id)arg1 atLocation:(id)arg2 onDate:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000007742

@end

