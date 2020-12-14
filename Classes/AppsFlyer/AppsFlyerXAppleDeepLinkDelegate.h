//
//  AppsFlyerXAppleDeepLinkDelegate.h
//  AppsFlyerCocos2dX
//
//  Created by Margot Guetta on 17/11/2020.
//

#ifndef AppsFlyerXAppleDeepLinkDelegate_h
#define AppsFlyerXAppleDeepLinkDelegate_h
#import "AppsFlyerLib.h"

@interface AppsFlyerXAppleDeepLinkDelegate: NSObject<AppsFlyerDeepLinkDelegate>

@property (nonatomic) void (* _Nullable didResolveDeepLinkCallback)(cocos2d::ValueMap result);
@end
#endif /* AppsFlyerXAppleDeepLinkDelegate_h */
