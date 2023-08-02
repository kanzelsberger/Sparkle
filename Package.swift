// swift-tools-version:5.3
import PackageDescription


let package = Package(
    name: "Sparkle",
    platforms: [.macOS(.v10_11)],
    products: [
        .library(
            name: "Sparkle",
            targets: ["Sparkle"])
    ],
    targets: [
        .target(
            name: "Sparkle",
            dependencies: []
        )
    ]
)
