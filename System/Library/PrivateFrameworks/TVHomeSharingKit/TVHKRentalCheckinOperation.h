//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSOperation, TVHKAsynchronousWorkToken;

__attribute__((visibility("hidden")))
@interface TVHKRentalCheckinOperation
{
    NSOperation *_mediaServerCheckoutOperation;	// 8 = 0x8
    TVHKAsynchronousWorkToken *_checkinWorkToken;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000035cf6
@property(retain, nonatomic) TVHKAsynchronousWorkToken *checkinWorkToken; // @synthesize checkinWorkToken=_checkinWorkToken;
@property(retain, nonatomic) NSOperation *mediaServerCheckoutOperation; // @synthesize mediaServerCheckoutOperation=_mediaServerCheckoutOperation;
- (void)_startMediaServerCheckoutOperation;	// IMP=0x0000000000035b0c
- (void)_startStoreCheckin;	// IMP=0x000000000003594e
- (void)cancel;	// IMP=0x00000000000358a1
- (void)executionDidBegin;	// IMP=0x000000000003588f

@end

