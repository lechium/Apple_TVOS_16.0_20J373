//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ASCPair : NSObject
{
    id _first;	// 8 = 0x8
    id _second;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000017ca7
@property(readonly, nonatomic) id second; // @synthesize second=_second;
@property(readonly, nonatomic) id first; // @synthesize first=_first;
- (id)description;	// IMP=0x0010000000017c00
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000017a6d
- (unsigned long long)hash;	// IMP=0x00100000000179bb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000178ec
- (id)initWithFirst:(id)arg1 second:(id)arg2;	// IMP=0x0010000000017853

@end

