//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "WFContentItemChangeTransaction.h"

@class CNMutableContact, NSArray;

__attribute__((visibility("hidden")))
@interface WFContactContentItemChangeTransaction : WFContentItemChangeTransaction
{
    CNMutableContact *_mutableContact;	// 8 = 0x8
    NSArray *_groupChangeRequest;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000a2859
@property(retain, nonatomic) NSArray *groupChangeRequest; // @synthesize groupChangeRequest=_groupChangeRequest;
@property(readonly, nonatomic) CNMutableContact *mutableContact; // @synthesize mutableContact=_mutableContact;
- (void)updateURLs:(id)arg1;	// IMP=0x00000000000a2452
- (void)updateStreetAddresses:(id)arg1;	// IMP=0x00000000000a2081
- (void)updateEmailAddresses:(id)arg1;	// IMP=0x00000000000a1cb0
- (void)updatePhoneNumbers:(id)arg1;	// IMP=0x00000000000a18df
- (void)saveWithCompletionHandler:(CDUnknownBlockType)arg1 isNew:(_Bool)arg2;	// IMP=0x00000000000a124c
- (id)initWithContentItem:(id)arg1;	// IMP=0x00000000000a1085

@end

