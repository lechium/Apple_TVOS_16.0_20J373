//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;
@protocol APSTokenInfo;

@interface APSPerAppTokenMapEntry : NSObject
{
    NSData *_perAppToken;	// 8 = 0x8
    id <APSTokenInfo> _info;	// 16 = 0x10
    _Bool _flag;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000077b22
@property(nonatomic) _Bool flag; // @synthesize flag=_flag;
@property(retain, nonatomic) id <APSTokenInfo> info; // @synthesize info=_info;
@property(retain, nonatomic) NSData *perAppToken; // @synthesize perAppToken=_perAppToken;
- (id)description;	// IMP=0x0010000000077a93

@end

