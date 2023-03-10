//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "WFWebResource.h"

@class WFFileRepresentation;

__attribute__((visibility("hidden")))
@interface WFFileWebResource : WFWebResource
{
    WFFileRepresentation *_file;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000007fb69
- (void).cxx_destruct;	// IMP=0x000000000007fb56
@property(readonly, nonatomic) WFFileRepresentation *file; // @synthesize file=_file;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000007faaa
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007fa1d
- (id)MIMEType;	// IMP=0x000000000007f9bc
- (id)data;	// IMP=0x000000000007f96c
- (id)loadInWKWebView:(id)arg1;	// IMP=0x000000000007f8c8
- (id)initWithFile:(id)arg1;	// IMP=0x000000000007f847

@end

