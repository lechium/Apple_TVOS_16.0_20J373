//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MTLSimDriver/MTLHeap-Protocol.h>

@class NSString;

@protocol MTLHeapSPI <MTLHeap>
@property(readonly) unsigned long long unfilteredResourceOptions;
- (NSString *)formattedDescription:(unsigned long long)arg1;

@optional
@property(readonly, nonatomic) unsigned long long protectionOptions;
@property(readonly, nonatomic) unsigned long long gpuAddress;
@end

