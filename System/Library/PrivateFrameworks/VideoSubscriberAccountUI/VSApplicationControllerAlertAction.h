//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VSApplicationControllerAlertAction : NSObject
{
    NSString *_title;	// 8 = 0x8
    long long _style;	// 16 = 0x10
    CDUnknownBlockType _callback;	// 24 = 0x18
}

+ (long long)styleFromString:(id)arg1;	// IMP=0x006000000006ebef
- (void).cxx_destruct;	// IMP=0x000000000006ec9e
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;

@end

