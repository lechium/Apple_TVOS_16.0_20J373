//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class StoreDownloadQueueRequest;

@interface CheckDownloadQueueOperation : ISOperation
{
    long long _numberOfAvailableDownloads;	// 96 = 0x60
    StoreDownloadQueueRequest *_request;	// 104 = 0x68
}

- (void)_runPendingCancelDownloadOperations;	// IMP=0x00200000000608d0
- (id)_newURLOperation;	// IMP=0x001000000006077c
- (id)_account;	// IMP=0x00100000000606e4
- (void)run;	// IMP=0x0010000000060244
@property(readonly) long long numberOfAvailableDownloads;
@property(readonly) StoreDownloadQueueRequest *downloadQueueRequest;
- (void)dealloc;	// IMP=0x0010000000060199
- (id)initWithDownloadQueueRequest:(id)arg1;	// IMP=0x00100000000600e1
- (id)init;	// IMP=0x00100000000600cd

@end
