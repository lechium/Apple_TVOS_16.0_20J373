//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACAccount, NSArray, NSDictionary;

@interface OwnsCheckTask
{
    ACAccount *_account;	// 8 = 0x8
    NSArray *_bundleIDs;	// 16 = 0x10
    NSDictionary *_outputDictionary;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000001b81fd
@property(readonly) NSDictionary *outputDictionary; // @synthesize outputDictionary=_outputDictionary;
@property(copy, nonatomic) NSArray *bundleIDs; // @synthesize bundleIDs=_bundleIDs;
@property(copy, nonatomic) ACAccount *account; // @synthesize account=_account;
- (id)_requestURL:(id *)arg1;	// IMP=0x00100000001b7fa7
- (void)main;	// IMP=0x00100000001b7b48
- (id)init;	// IMP=0x00100000001b7b19

@end
