//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface GKAuthenticateCredential
{
    NSString *_authenticationToken;	// 8 = 0x8
    NSString *_accountName;	// 16 = 0x10
    NSString *_playerID;	// 24 = 0x18
}

+ (id)secureCodedPropertyKeys;	// IMP=0x0040000000070bca
- (void).cxx_destruct;	// IMP=0x0020000000070d0b
@property(retain, nonatomic) NSString *playerID; // @synthesize playerID=_playerID;
@property(retain, nonatomic) NSString *accountName; // @synthesize accountName=_accountName;
@property(retain, nonatomic) NSString *authenticationToken; // @synthesize authenticationToken=_authenticationToken;
- (id)init;	// IMP=0x0010000000070b9b

@end
