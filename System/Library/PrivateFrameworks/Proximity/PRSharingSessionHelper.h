//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PRSharingSessionHelper : NSObject
{
}

+ (long long)CoarseRangeToProx:(int)arg1;	// IMP=0x008000000001004b
+ (id)ProxToString:(long long)arg1;	// IMP=0x008000000001002c
+ (int)ProxToCoarseRange:(long long)arg1;	// IMP=0x0080000000010014
+ (id)reverseNSData:(id)arg1;	// IMP=0x008000000000fe98
+ (id)convertMacStringToNSData:(const void *)arg1;	// IMP=0x008000000000fe3d
+ (unsigned long long)NSDataToUInt64:(id)arg1;	// IMP=0x008000000000fd36
+ (basic_string_5886a005)UIntToHexString:(unsigned long long)arg1 len:(unsigned long long)arg2;	// IMP=0x008000000000f9ff
+ (id)HexStringToNSDataMac:(const void *)arg1;	// IMP=0x008000000000f8b1
+ (id)UUIDStringToNSDataMac:(const void *)arg1 len:(unsigned long long)arg2;	// IMP=0x008000000000f7a4
+ (id)UUIDToNSDataMac:(id)arg1 len:(unsigned long long)arg2;	// IMP=0x008000000000f664
+ (id)NSDataMacToUUID:(id)arg1;	// IMP=0x008000000000f516

@end

