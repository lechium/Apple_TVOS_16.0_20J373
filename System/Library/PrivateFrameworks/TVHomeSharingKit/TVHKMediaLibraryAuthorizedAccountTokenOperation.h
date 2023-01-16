//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSNumber, TVHKFairPlaySAPContext;

__attribute__((visibility("hidden")))
@interface TVHKMediaLibraryAuthorizedAccountTokenOperation
{
    _Bool _useTokenEncryption;	// 8 = 0x8
    NSNumber *_tokenStatus;	// 16 = 0x10
    NSData *_tokenData;	// 24 = 0x18
    TVHKFairPlaySAPContext *_fairPlaySAPContext;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000006b030
@property(nonatomic) _Bool useTokenEncryption; // @synthesize useTokenEncryption=_useTokenEncryption;
@property(retain, nonatomic) TVHKFairPlaySAPContext *fairPlaySAPContext; // @synthesize fairPlaySAPContext=_fairPlaySAPContext;
@property(copy, nonatomic) NSData *tokenData; // @synthesize tokenData=_tokenData;
@property(copy, nonatomic) NSNumber *tokenStatus; // @synthesize tokenStatus=_tokenStatus;
- (id)_decryptTokenData:(id)arg1;	// IMP=0x000000000006af24
- (void)_handleResponse:(id)arg1;	// IMP=0x000000000006ab63
- (id)initWithUserIdentifier:(id)arg1 sessionState:(id)arg2 useTokenEncryption:(_Bool)arg3 requestSession:(id)arg4;	// IMP=0x000000000006a98c
- (id)initWithRequest:(id)arg1 requestSession:(id)arg2;	// IMP=0x000000000006a91d

@end

