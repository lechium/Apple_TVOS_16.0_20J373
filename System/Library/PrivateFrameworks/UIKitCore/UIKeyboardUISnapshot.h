//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface UIKeyboardUISnapshot : NSObject
{
    unsigned int _slotID;	// 8 = 0x8
    struct CGSize _size;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000d3a884
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) unsigned int slotID; // @synthesize slotID=_slotID;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d3abb6
- (id)description;	// IMP=0x0000000000d3aac0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d3aa7e
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000d3a976
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000d3a88c

@end
