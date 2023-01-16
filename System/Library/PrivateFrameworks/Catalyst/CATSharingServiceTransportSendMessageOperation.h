//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CATOperation.h"

@class CATMessage;
@protocol CATSharingConnection;

__attribute__((visibility("hidden")))
@interface CATSharingServiceTransportSendMessageOperation : CATOperation
{
    id <CATSharingConnection> mConnection;	// 8 = 0x8
    CATMessage *mMessage;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000459e7
- (void)didSendMessageWithError:(id)arg1;	// IMP=0x0000000000045960
- (void)sendMessage;	// IMP=0x00000000000456c2
- (void)main;	// IMP=0x00000000000455fc
- (void)cancel;	// IMP=0x00000000000454cc
- (_Bool)isAsynchronous;	// IMP=0x00000000000454c4
- (id)initWithConnection:(id)arg1 message:(id)arg2;	// IMP=0x0000000000045422

@end

