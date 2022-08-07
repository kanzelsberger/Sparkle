//
//  SPUInstallationInfo.h
//  Sparkle
//
//  Created by Mayur Pawashe on 4/10/16.
//  Copyright © 2016 Sparkle Project. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class SUAppcastItem;

@interface SPUInstallationInfo : NSObject <NSSecureCoding>

- (instancetype)initWithAppcastItem:(SUAppcastItem *)appcastItem canSilentlyInstall:(BOOL)canSilentyInstall;

@property (nonatomic, readonly) SUAppcastItem *appcastItem;

// Always YES in newer versions of Sparkle but kept around for compatibility
@property (nonatomic, readonly) BOOL canSilentlyInstall;

@property (nonatomic) BOOL systemDomain;

@end

NS_ASSUME_NONNULL_END
