//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface SecAKSRefKey : NSObject
{
    struct aks_ref_key_s *_refKey;	// 8 = 0x8
}

@property(readonly) NSData *refKeyBlob;
- (id)keyWithWrappedData:(id)arg1;	// IMP=0x001000000003b72d
- (id)wrappedDataForKey:(id)arg1;	// IMP=0x001000000003b629
- (void)dealloc;	// IMP=0x001000000003b5ef
- (id)initWithBlob:(id)arg1 keybag:(int)arg2;	// IMP=0x001000000003b53e
- (id)initWithKeybag:(int)arg1 keyclass:(int)arg2;	// IMP=0x001000000003b4d9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

