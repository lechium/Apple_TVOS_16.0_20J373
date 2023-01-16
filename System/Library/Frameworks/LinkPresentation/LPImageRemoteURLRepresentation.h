//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface LPImageRemoteURLRepresentation : NSObject
{
    unsigned long long _scale;	// 8 = 0x8
    NSURL *_URL;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000006acb
@property(readonly, retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) unsigned long long scale; // @synthesize scale=_scale;
- (id)initWithScale:(unsigned long long)arg1 URL:(id)arg2;	// IMP=0x0000000000006a2e

@end

