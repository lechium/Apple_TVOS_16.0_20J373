//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIRemoteTextEditingAttributes;

__attribute__((visibility("hidden")))
@interface UIRemoteTextEditingSession : NSObject
{
    UIRemoteTextEditingAttributes *_attributes;	// 8 = 0x8
    NSString *_text;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000eec0fa
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) UIRemoteTextEditingAttributes *attributes; // @synthesize attributes=_attributes;

@end

