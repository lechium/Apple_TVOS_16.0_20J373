//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BulletinBoard/NSObject-Protocol.h>

@class BBSectionIcon, BBSectionInfo, NSData, NSString;

@protocol BBSectionIdentity <NSObject>
- (NSString *)sectionIdentifier;

@optional
- (NSString *)sectionBundlePath;
- (NSString *)parentSectionIdentifier;
- (NSData *)sectionIconData;
- (BBSectionIcon *)sectionIcon;
- (NSString *)sectionDisplayName;
- (BBSectionInfo *)defaultSectionInfo;
- (NSString *)universalSectionIdentifier;
@end

