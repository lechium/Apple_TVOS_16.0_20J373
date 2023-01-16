//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol AdoptionManagerInterface, OS_dispatch_queue, PurchaseManagerInterface;

@interface PurchaseService : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    id <AdoptionManagerInterface> _adoptionInterface;	// 16 = 0x10
    id <PurchaseManagerInterface> _legacyPurchaseInterface;	// 24 = 0x18
    id <PurchaseManagerInterface> _purchaseInterface;	// 32 = 0x20
}

+ (id)defaultService;	// IMP=0x00200000001d9e08
- (void).cxx_destruct;	// IMP=0x00200000001db576
@property(retain) id <PurchaseManagerInterface> purchaseInterface; // @synthesize purchaseInterface=_purchaseInterface;
@property(retain) id <PurchaseManagerInterface> legacyPurchaseInterface; // @synthesize legacyPurchaseInterface=_legacyPurchaseInterface;
@property(retain) id <AdoptionManagerInterface> adoptionInterface; // @synthesize adoptionInterface=_adoptionInterface;
@property(retain) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)startPurchase:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001daec4
- (void)processPurchase:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001daa7e
- (void)notifyDialogCompleteForPurchaseID:(id)arg1 result:(_Bool)arg2 selectedButton:(long long)arg3 withResultHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000001da49d
- (void)checkStoreQueue:(long long)arg1;	// IMP=0x00100000001da228
- (void)adoptableBundleIdentifiersWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001da0af
- (void)adopt:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001d9efe
- (id)init;	// IMP=0x00100000001d9e5d

@end

