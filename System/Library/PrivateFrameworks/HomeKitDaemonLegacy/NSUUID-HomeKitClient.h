//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUUID.h>

@interface NSUUID (HomeKitClient)
+ (_Bool)hm_setAssistantIdentifierSalt:(id)arg1;	// IMP=0x00600000005ff622
+ (id)hm_deriveUUIDForAssistantFromBaseUUID:(id)arg1;	// IMP=0x00600000005ff607
+ (id)hm_deriveUUIDForAssistantFromBaseUUID:(id)arg1 withSalts:(id)arg2;	// IMP=0x00600000005ff54b
+ (void)hm_setIdentifierSalt:(id)arg1;	// IMP=0x00600000005ff4f3
+ (id)hm_deriveUUIDFromBaseUUID:(id)arg1;	// IMP=0x00600000005ff4d8
+ (id)hm_deriveUUIDFromBaseUUID:(id)arg1 withSalts:(id)arg2;	// IMP=0x00600000005ff41e
+ (id)hm_deriveUUIDFromBaseUUID:(id)arg1 identifierSalt:(id)arg2;	// IMP=0x00600000005ff402
+ (id)hm_deriveUUIDFromBaseUUID:(id)arg1 identifierSalt:(id)arg2 withSalts:(id)arg3;	// IMP=0x00600000005ff3e9
+ (id)hm_uuid:(id)arg1 identifierSalt:(id)arg2 withSalts:(id)arg3;	// IMP=0x00600000005ff111
- (id)hm_convertToData;	// IMP=0x00100000005fdbf3
@end

