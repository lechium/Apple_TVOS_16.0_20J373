//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNUIAccountsFacade : NSObject
{
    id _accountStore;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000ab2c4
@property(readonly, nonatomic) id accountStore; // @synthesize accountStore=_accountStore;
- (void)fetchiCloudFamilyMembersWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ab2b4
- (id)initWithAccountStore:(id)arg1 requestRunner:(id)arg2;	// IMP=0x00000000000ab2a6
- (id)init;	// IMP=0x00000000000ab290

@end

