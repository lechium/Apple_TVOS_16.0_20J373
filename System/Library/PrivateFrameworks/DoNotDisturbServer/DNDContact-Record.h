//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DoNotDisturb/DNDContact.h>

@interface DNDContact (Record)
+ (id)contactForRecord:(id)arg1;	// IMP=0x005000000000bf07
+ (id)keysToFetch;	// IMP=0x005000000003bc02
+ (id)contactWithCNContact:(id)arg1;	// IMP=0x005000000003b6c8
- (id)makeRecord;	// IMP=0x001000000000c0d0
- (id)sanitizedContactWithContactStore:(id)arg1 withError:(out id *)arg2;	// IMP=0x001000000003bd0b
- (_Bool)needsSanitization;	// IMP=0x001000000005a059
@end

