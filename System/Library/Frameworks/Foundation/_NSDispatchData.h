//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

__attribute__((visibility("hidden")))
@interface _NSDispatchData : NSData
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0080000000673f79
- (Class)classForCoder;	// IMP=0x0000000000674102
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000006740c8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000673f81
- (_Bool)_allowsDirectEncoding;	// IMP=0x0000000000673f71
- (_Bool)_providesConcreteBacking;	// IMP=0x0000000000673f5f
- (id)_createDispatchData;	// IMP=0x0000000000673f47
- (_Bool)_isDispatchData;	// IMP=0x0000000000673f3f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000673f34
- (id)subdataWithRange:(struct _NSRange)arg1;	// IMP=0x0000000000673df8
- (unsigned long long)hash;	// IMP=0x0000000000673c80
- (void)getBytes:(void *)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000006739b1
- (void)enumerateByteRangesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000006738fa
- (void)getBytes:(void *)arg1 length:(unsigned long long)arg2;	// IMP=0x00000000006738a2
- (void)getBytes:(void *)arg1;	// IMP=0x0000000000673874

@end

