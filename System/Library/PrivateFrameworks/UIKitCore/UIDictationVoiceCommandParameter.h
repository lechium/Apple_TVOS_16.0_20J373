//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIDictationVoiceCommandParameter : NSObject
{
    NSString *_text;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000009b9dde
- (void).cxx_destruct;	// IMP=0x00000000009b9f47
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000009b9e9d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000009b9e7a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000009b9de6

@end

