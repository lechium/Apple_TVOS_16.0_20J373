//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface FARegisterPushTokenOperation
{
    NSData *_pushToken;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000018a30
@property(readonly) NSData *pushToken; // @synthesize pushToken=_pushToken;
- (id)registerToken;	// IMP=0x0010000000018636
- (id)pushTokenString;	// IMP=0x001000000001854c
- (id)initWithNetworkService:(id)arg1 pushToken:(id)arg2;	// IMP=0x00100000000184d4

@end

